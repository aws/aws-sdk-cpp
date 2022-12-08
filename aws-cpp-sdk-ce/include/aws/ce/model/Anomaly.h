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
    AWS_COSTEXPLORER_API Anomaly();
    AWS_COSTEXPLORER_API Anomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Anomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the anomaly. </p>
     */
    inline const Aws::String& GetAnomalyId() const{ return m_anomalyId; }

    /**
     * <p>The unique identifier for the anomaly. </p>
     */
    inline bool AnomalyIdHasBeenSet() const { return m_anomalyIdHasBeenSet; }

    /**
     * <p>The unique identifier for the anomaly. </p>
     */
    inline void SetAnomalyId(const Aws::String& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = value; }

    /**
     * <p>The unique identifier for the anomaly. </p>
     */
    inline void SetAnomalyId(Aws::String&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::move(value); }

    /**
     * <p>The unique identifier for the anomaly. </p>
     */
    inline void SetAnomalyId(const char* value) { m_anomalyIdHasBeenSet = true; m_anomalyId.assign(value); }

    /**
     * <p>The unique identifier for the anomaly. </p>
     */
    inline Anomaly& WithAnomalyId(const Aws::String& value) { SetAnomalyId(value); return *this;}

    /**
     * <p>The unique identifier for the anomaly. </p>
     */
    inline Anomaly& WithAnomalyId(Aws::String&& value) { SetAnomalyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the anomaly. </p>
     */
    inline Anomaly& WithAnomalyId(const char* value) { SetAnomalyId(value); return *this;}


    /**
     * <p>The first day the anomaly is detected. </p>
     */
    inline const Aws::String& GetAnomalyStartDate() const{ return m_anomalyStartDate; }

    /**
     * <p>The first day the anomaly is detected. </p>
     */
    inline bool AnomalyStartDateHasBeenSet() const { return m_anomalyStartDateHasBeenSet; }

    /**
     * <p>The first day the anomaly is detected. </p>
     */
    inline void SetAnomalyStartDate(const Aws::String& value) { m_anomalyStartDateHasBeenSet = true; m_anomalyStartDate = value; }

    /**
     * <p>The first day the anomaly is detected. </p>
     */
    inline void SetAnomalyStartDate(Aws::String&& value) { m_anomalyStartDateHasBeenSet = true; m_anomalyStartDate = std::move(value); }

    /**
     * <p>The first day the anomaly is detected. </p>
     */
    inline void SetAnomalyStartDate(const char* value) { m_anomalyStartDateHasBeenSet = true; m_anomalyStartDate.assign(value); }

    /**
     * <p>The first day the anomaly is detected. </p>
     */
    inline Anomaly& WithAnomalyStartDate(const Aws::String& value) { SetAnomalyStartDate(value); return *this;}

    /**
     * <p>The first day the anomaly is detected. </p>
     */
    inline Anomaly& WithAnomalyStartDate(Aws::String&& value) { SetAnomalyStartDate(std::move(value)); return *this;}

    /**
     * <p>The first day the anomaly is detected. </p>
     */
    inline Anomaly& WithAnomalyStartDate(const char* value) { SetAnomalyStartDate(value); return *this;}


    /**
     * <p>The last day the anomaly is detected. </p>
     */
    inline const Aws::String& GetAnomalyEndDate() const{ return m_anomalyEndDate; }

    /**
     * <p>The last day the anomaly is detected. </p>
     */
    inline bool AnomalyEndDateHasBeenSet() const { return m_anomalyEndDateHasBeenSet; }

    /**
     * <p>The last day the anomaly is detected. </p>
     */
    inline void SetAnomalyEndDate(const Aws::String& value) { m_anomalyEndDateHasBeenSet = true; m_anomalyEndDate = value; }

    /**
     * <p>The last day the anomaly is detected. </p>
     */
    inline void SetAnomalyEndDate(Aws::String&& value) { m_anomalyEndDateHasBeenSet = true; m_anomalyEndDate = std::move(value); }

    /**
     * <p>The last day the anomaly is detected. </p>
     */
    inline void SetAnomalyEndDate(const char* value) { m_anomalyEndDateHasBeenSet = true; m_anomalyEndDate.assign(value); }

    /**
     * <p>The last day the anomaly is detected. </p>
     */
    inline Anomaly& WithAnomalyEndDate(const Aws::String& value) { SetAnomalyEndDate(value); return *this;}

    /**
     * <p>The last day the anomaly is detected. </p>
     */
    inline Anomaly& WithAnomalyEndDate(Aws::String&& value) { SetAnomalyEndDate(std::move(value)); return *this;}

    /**
     * <p>The last day the anomaly is detected. </p>
     */
    inline Anomaly& WithAnomalyEndDate(const char* value) { SetAnomalyEndDate(value); return *this;}


    /**
     * <p>The dimension for the anomaly (for example, an Amazon Web Service in a
     * service monitor). </p>
     */
    inline const Aws::String& GetDimensionValue() const{ return m_dimensionValue; }

    /**
     * <p>The dimension for the anomaly (for example, an Amazon Web Service in a
     * service monitor). </p>
     */
    inline bool DimensionValueHasBeenSet() const { return m_dimensionValueHasBeenSet; }

    /**
     * <p>The dimension for the anomaly (for example, an Amazon Web Service in a
     * service monitor). </p>
     */
    inline void SetDimensionValue(const Aws::String& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = value; }

    /**
     * <p>The dimension for the anomaly (for example, an Amazon Web Service in a
     * service monitor). </p>
     */
    inline void SetDimensionValue(Aws::String&& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = std::move(value); }

    /**
     * <p>The dimension for the anomaly (for example, an Amazon Web Service in a
     * service monitor). </p>
     */
    inline void SetDimensionValue(const char* value) { m_dimensionValueHasBeenSet = true; m_dimensionValue.assign(value); }

    /**
     * <p>The dimension for the anomaly (for example, an Amazon Web Service in a
     * service monitor). </p>
     */
    inline Anomaly& WithDimensionValue(const Aws::String& value) { SetDimensionValue(value); return *this;}

    /**
     * <p>The dimension for the anomaly (for example, an Amazon Web Service in a
     * service monitor). </p>
     */
    inline Anomaly& WithDimensionValue(Aws::String&& value) { SetDimensionValue(std::move(value)); return *this;}

    /**
     * <p>The dimension for the anomaly (for example, an Amazon Web Service in a
     * service monitor). </p>
     */
    inline Anomaly& WithDimensionValue(const char* value) { SetDimensionValue(value); return *this;}


    /**
     * <p>The list of identified root causes for the anomaly. </p>
     */
    inline const Aws::Vector<RootCause>& GetRootCauses() const{ return m_rootCauses; }

    /**
     * <p>The list of identified root causes for the anomaly. </p>
     */
    inline bool RootCausesHasBeenSet() const { return m_rootCausesHasBeenSet; }

    /**
     * <p>The list of identified root causes for the anomaly. </p>
     */
    inline void SetRootCauses(const Aws::Vector<RootCause>& value) { m_rootCausesHasBeenSet = true; m_rootCauses = value; }

    /**
     * <p>The list of identified root causes for the anomaly. </p>
     */
    inline void SetRootCauses(Aws::Vector<RootCause>&& value) { m_rootCausesHasBeenSet = true; m_rootCauses = std::move(value); }

    /**
     * <p>The list of identified root causes for the anomaly. </p>
     */
    inline Anomaly& WithRootCauses(const Aws::Vector<RootCause>& value) { SetRootCauses(value); return *this;}

    /**
     * <p>The list of identified root causes for the anomaly. </p>
     */
    inline Anomaly& WithRootCauses(Aws::Vector<RootCause>&& value) { SetRootCauses(std::move(value)); return *this;}

    /**
     * <p>The list of identified root causes for the anomaly. </p>
     */
    inline Anomaly& AddRootCauses(const RootCause& value) { m_rootCausesHasBeenSet = true; m_rootCauses.push_back(value); return *this; }

    /**
     * <p>The list of identified root causes for the anomaly. </p>
     */
    inline Anomaly& AddRootCauses(RootCause&& value) { m_rootCausesHasBeenSet = true; m_rootCauses.push_back(std::move(value)); return *this; }


    /**
     * <p>The latest and maximum score for the anomaly. </p>
     */
    inline const AnomalyScore& GetAnomalyScore() const{ return m_anomalyScore; }

    /**
     * <p>The latest and maximum score for the anomaly. </p>
     */
    inline bool AnomalyScoreHasBeenSet() const { return m_anomalyScoreHasBeenSet; }

    /**
     * <p>The latest and maximum score for the anomaly. </p>
     */
    inline void SetAnomalyScore(const AnomalyScore& value) { m_anomalyScoreHasBeenSet = true; m_anomalyScore = value; }

    /**
     * <p>The latest and maximum score for the anomaly. </p>
     */
    inline void SetAnomalyScore(AnomalyScore&& value) { m_anomalyScoreHasBeenSet = true; m_anomalyScore = std::move(value); }

    /**
     * <p>The latest and maximum score for the anomaly. </p>
     */
    inline Anomaly& WithAnomalyScore(const AnomalyScore& value) { SetAnomalyScore(value); return *this;}

    /**
     * <p>The latest and maximum score for the anomaly. </p>
     */
    inline Anomaly& WithAnomalyScore(AnomalyScore&& value) { SetAnomalyScore(std::move(value)); return *this;}


    /**
     * <p>The dollar impact for the anomaly. </p>
     */
    inline const Impact& GetImpact() const{ return m_impact; }

    /**
     * <p>The dollar impact for the anomaly. </p>
     */
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }

    /**
     * <p>The dollar impact for the anomaly. </p>
     */
    inline void SetImpact(const Impact& value) { m_impactHasBeenSet = true; m_impact = value; }

    /**
     * <p>The dollar impact for the anomaly. </p>
     */
    inline void SetImpact(Impact&& value) { m_impactHasBeenSet = true; m_impact = std::move(value); }

    /**
     * <p>The dollar impact for the anomaly. </p>
     */
    inline Anomaly& WithImpact(const Impact& value) { SetImpact(value); return *this;}

    /**
     * <p>The dollar impact for the anomaly. </p>
     */
    inline Anomaly& WithImpact(Impact&& value) { SetImpact(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the cost monitor that generated this
     * anomaly. </p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the cost monitor that generated this
     * anomaly. </p>
     */
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the cost monitor that generated this
     * anomaly. </p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArnHasBeenSet = true; m_monitorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the cost monitor that generated this
     * anomaly. </p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the cost monitor that generated this
     * anomaly. </p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArnHasBeenSet = true; m_monitorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the cost monitor that generated this
     * anomaly. </p>
     */
    inline Anomaly& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the cost monitor that generated this
     * anomaly. </p>
     */
    inline Anomaly& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the cost monitor that generated this
     * anomaly. </p>
     */
    inline Anomaly& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}


    /**
     * <p>The feedback value. </p>
     */
    inline const AnomalyFeedbackType& GetFeedback() const{ return m_feedback; }

    /**
     * <p>The feedback value. </p>
     */
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }

    /**
     * <p>The feedback value. </p>
     */
    inline void SetFeedback(const AnomalyFeedbackType& value) { m_feedbackHasBeenSet = true; m_feedback = value; }

    /**
     * <p>The feedback value. </p>
     */
    inline void SetFeedback(AnomalyFeedbackType&& value) { m_feedbackHasBeenSet = true; m_feedback = std::move(value); }

    /**
     * <p>The feedback value. </p>
     */
    inline Anomaly& WithFeedback(const AnomalyFeedbackType& value) { SetFeedback(value); return *this;}

    /**
     * <p>The feedback value. </p>
     */
    inline Anomaly& WithFeedback(AnomalyFeedbackType&& value) { SetFeedback(std::move(value)); return *this;}

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

    AnomalyFeedbackType m_feedback;
    bool m_feedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
