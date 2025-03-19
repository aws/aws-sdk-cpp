/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/AnomalyScore.h>
#include <aws/ce/model/Impact.h>
#include <aws/ce/model/AnomalyFeedbackType.h>
#include <aws/ce/model/RootCause.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>An unusual cost pattern. This consists of the detailed metadata and the
   * current status of the anomaly object. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/Anomaly">AWS API
   * Reference</a></p>
   */
  class Anomaly
  {
  public:
    AWS_COSTEXPLORER_API Anomaly() = default;
    AWS_COSTEXPLORER_API Anomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Anomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the anomaly. </p>
     */
    inline const Aws::String& GetAnomalyId() const { return m_anomalyId; }
    inline bool AnomalyIdHasBeenSet() const { return m_anomalyIdHasBeenSet; }
    template<typename AnomalyIdT = Aws::String>
    void SetAnomalyId(AnomalyIdT&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::forward<AnomalyIdT>(value); }
    template<typename AnomalyIdT = Aws::String>
    Anomaly& WithAnomalyId(AnomalyIdT&& value) { SetAnomalyId(std::forward<AnomalyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first day the anomaly is detected. </p>
     */
    inline const Aws::String& GetAnomalyStartDate() const { return m_anomalyStartDate; }
    inline bool AnomalyStartDateHasBeenSet() const { return m_anomalyStartDateHasBeenSet; }
    template<typename AnomalyStartDateT = Aws::String>
    void SetAnomalyStartDate(AnomalyStartDateT&& value) { m_anomalyStartDateHasBeenSet = true; m_anomalyStartDate = std::forward<AnomalyStartDateT>(value); }
    template<typename AnomalyStartDateT = Aws::String>
    Anomaly& WithAnomalyStartDate(AnomalyStartDateT&& value) { SetAnomalyStartDate(std::forward<AnomalyStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last day the anomaly is detected. </p>
     */
    inline const Aws::String& GetAnomalyEndDate() const { return m_anomalyEndDate; }
    inline bool AnomalyEndDateHasBeenSet() const { return m_anomalyEndDateHasBeenSet; }
    template<typename AnomalyEndDateT = Aws::String>
    void SetAnomalyEndDate(AnomalyEndDateT&& value) { m_anomalyEndDateHasBeenSet = true; m_anomalyEndDate = std::forward<AnomalyEndDateT>(value); }
    template<typename AnomalyEndDateT = Aws::String>
    Anomaly& WithAnomalyEndDate(AnomalyEndDateT&& value) { SetAnomalyEndDate(std::forward<AnomalyEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension for the anomaly (for example, an Amazon Web Services service in
     * a service monitor). </p>
     */
    inline const Aws::String& GetDimensionValue() const { return m_dimensionValue; }
    inline bool DimensionValueHasBeenSet() const { return m_dimensionValueHasBeenSet; }
    template<typename DimensionValueT = Aws::String>
    void SetDimensionValue(DimensionValueT&& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = std::forward<DimensionValueT>(value); }
    template<typename DimensionValueT = Aws::String>
    Anomaly& WithDimensionValue(DimensionValueT&& value) { SetDimensionValue(std::forward<DimensionValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of identified root causes for the anomaly. </p>
     */
    inline const Aws::Vector<RootCause>& GetRootCauses() const { return m_rootCauses; }
    inline bool RootCausesHasBeenSet() const { return m_rootCausesHasBeenSet; }
    template<typename RootCausesT = Aws::Vector<RootCause>>
    void SetRootCauses(RootCausesT&& value) { m_rootCausesHasBeenSet = true; m_rootCauses = std::forward<RootCausesT>(value); }
    template<typename RootCausesT = Aws::Vector<RootCause>>
    Anomaly& WithRootCauses(RootCausesT&& value) { SetRootCauses(std::forward<RootCausesT>(value)); return *this;}
    template<typename RootCausesT = RootCause>
    Anomaly& AddRootCauses(RootCausesT&& value) { m_rootCausesHasBeenSet = true; m_rootCauses.emplace_back(std::forward<RootCausesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The latest and maximum score for the anomaly. </p>
     */
    inline const AnomalyScore& GetAnomalyScore() const { return m_anomalyScore; }
    inline bool AnomalyScoreHasBeenSet() const { return m_anomalyScoreHasBeenSet; }
    template<typename AnomalyScoreT = AnomalyScore>
    void SetAnomalyScore(AnomalyScoreT&& value) { m_anomalyScoreHasBeenSet = true; m_anomalyScore = std::forward<AnomalyScoreT>(value); }
    template<typename AnomalyScoreT = AnomalyScore>
    Anomaly& WithAnomalyScore(AnomalyScoreT&& value) { SetAnomalyScore(std::forward<AnomalyScoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dollar impact for the anomaly. </p>
     */
    inline const Impact& GetImpact() const { return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    template<typename ImpactT = Impact>
    void SetImpact(ImpactT&& value) { m_impactHasBeenSet = true; m_impact = std::forward<ImpactT>(value); }
    template<typename ImpactT = Impact>
    Anomaly& WithImpact(ImpactT&& value) { SetImpact(std::forward<ImpactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the cost monitor that generated this
     * anomaly. </p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    Anomaly& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feedback value. </p>
     */
    inline AnomalyFeedbackType GetFeedback() const { return m_feedback; }
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
    inline void SetFeedback(AnomalyFeedbackType value) { m_feedbackHasBeenSet = true; m_feedback = value; }
    inline Anomaly& WithFeedback(AnomalyFeedbackType value) { SetFeedback(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyId;
    bool m_anomalyIdHasBeenSet = false;

    Aws::String m_anomalyStartDate;
    bool m_anomalyStartDateHasBeenSet = false;

    Aws::String m_anomalyEndDate;
    bool m_anomalyEndDateHasBeenSet = false;

    Aws::String m_dimensionValue;
    bool m_dimensionValueHasBeenSet = false;

    Aws::Vector<RootCause> m_rootCauses;
    bool m_rootCausesHasBeenSet = false;

    AnomalyScore m_anomalyScore;
    bool m_anomalyScoreHasBeenSet = false;

    Impact m_impact;
    bool m_impactHasBeenSet = false;

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    AnomalyFeedbackType m_feedback{AnomalyFeedbackType::NOT_SET};
    bool m_feedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
