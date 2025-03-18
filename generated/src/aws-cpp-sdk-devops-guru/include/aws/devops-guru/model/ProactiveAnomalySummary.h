/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/AnomalySeverity.h>
#include <aws/devops-guru/model/AnomalyStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devops-guru/model/AnomalyTimeRange.h>
#include <aws/devops-guru/model/AnomalyReportedTimeRange.h>
#include <aws/devops-guru/model/PredictionTimeRange.h>
#include <aws/devops-guru/model/AnomalySourceDetails.h>
#include <aws/devops-guru/model/ResourceCollection.h>
#include <aws/devops-guru/model/AnomalySourceMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/AnomalyResource.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>Details about a proactive anomaly. This object is returned by
   * <code>DescribeAnomaly.</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ProactiveAnomalySummary">AWS
   * API Reference</a></p>
   */
  class ProactiveAnomalySummary
  {
  public:
    AWS_DEVOPSGURU_API ProactiveAnomalySummary() = default;
    AWS_DEVOPSGURU_API ProactiveAnomalySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ProactiveAnomalySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the anomaly.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ProactiveAnomalySummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the anomaly. The severity of anomalies that generate an
     * insight determine that insight's severity. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline AnomalySeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(AnomalySeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ProactiveAnomalySummary& WithSeverity(AnomalySeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the anomaly.</p>
     */
    inline AnomalyStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AnomalyStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProactiveAnomalySummary& WithStatus(AnomalyStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time of the anomaly's most recent update. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    ProactiveAnomalySummary& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AnomalyTimeRange& GetAnomalyTimeRange() const { return m_anomalyTimeRange; }
    inline bool AnomalyTimeRangeHasBeenSet() const { return m_anomalyTimeRangeHasBeenSet; }
    template<typename AnomalyTimeRangeT = AnomalyTimeRange>
    void SetAnomalyTimeRange(AnomalyTimeRangeT&& value) { m_anomalyTimeRangeHasBeenSet = true; m_anomalyTimeRange = std::forward<AnomalyTimeRangeT>(value); }
    template<typename AnomalyTimeRangeT = AnomalyTimeRange>
    ProactiveAnomalySummary& WithAnomalyTimeRange(AnomalyTimeRangeT&& value) { SetAnomalyTimeRange(std::forward<AnomalyTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An <code>AnomalyReportedTimeRange</code> object that specifies the time
     * range between when the anomaly is opened and the time when it is closed. </p>
     */
    inline const AnomalyReportedTimeRange& GetAnomalyReportedTimeRange() const { return m_anomalyReportedTimeRange; }
    inline bool AnomalyReportedTimeRangeHasBeenSet() const { return m_anomalyReportedTimeRangeHasBeenSet; }
    template<typename AnomalyReportedTimeRangeT = AnomalyReportedTimeRange>
    void SetAnomalyReportedTimeRange(AnomalyReportedTimeRangeT&& value) { m_anomalyReportedTimeRangeHasBeenSet = true; m_anomalyReportedTimeRange = std::forward<AnomalyReportedTimeRangeT>(value); }
    template<typename AnomalyReportedTimeRangeT = AnomalyReportedTimeRange>
    ProactiveAnomalySummary& WithAnomalyReportedTimeRange(AnomalyReportedTimeRangeT&& value) { SetAnomalyReportedTimeRange(std::forward<AnomalyReportedTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PredictionTimeRange& GetPredictionTimeRange() const { return m_predictionTimeRange; }
    inline bool PredictionTimeRangeHasBeenSet() const { return m_predictionTimeRangeHasBeenSet; }
    template<typename PredictionTimeRangeT = PredictionTimeRange>
    void SetPredictionTimeRange(PredictionTimeRangeT&& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = std::forward<PredictionTimeRangeT>(value); }
    template<typename PredictionTimeRangeT = PredictionTimeRange>
    ProactiveAnomalySummary& WithPredictionTimeRange(PredictionTimeRangeT&& value) { SetPredictionTimeRange(std::forward<PredictionTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline const AnomalySourceDetails& GetSourceDetails() const { return m_sourceDetails; }
    inline bool SourceDetailsHasBeenSet() const { return m_sourceDetailsHasBeenSet; }
    template<typename SourceDetailsT = AnomalySourceDetails>
    void SetSourceDetails(SourceDetailsT&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = std::forward<SourceDetailsT>(value); }
    template<typename SourceDetailsT = AnomalySourceDetails>
    ProactiveAnomalySummary& WithSourceDetails(SourceDetailsT&& value) { SetSourceDetails(std::forward<SourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline const Aws::String& GetAssociatedInsightId() const { return m_associatedInsightId; }
    inline bool AssociatedInsightIdHasBeenSet() const { return m_associatedInsightIdHasBeenSet; }
    template<typename AssociatedInsightIdT = Aws::String>
    void SetAssociatedInsightId(AssociatedInsightIdT&& value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId = std::forward<AssociatedInsightIdT>(value); }
    template<typename AssociatedInsightIdT = Aws::String>
    ProactiveAnomalySummary& WithAssociatedInsightId(AssociatedInsightIdT&& value) { SetAssociatedInsightId(std::forward<AssociatedInsightIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = ResourceCollection>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollection>
    ProactiveAnomalySummary& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A threshold that was exceeded by behavior in analyzed resources. Exceeding
     * this threshold is related to the anomalous behavior that generated this anomaly.
     * </p>
     */
    inline double GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(double value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ProactiveAnomalySummary& WithLimit(double value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the source which detects proactive anomalies.</p>
     */
    inline const AnomalySourceMetadata& GetSourceMetadata() const { return m_sourceMetadata; }
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }
    template<typename SourceMetadataT = AnomalySourceMetadata>
    void SetSourceMetadata(SourceMetadataT&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::forward<SourceMetadataT>(value); }
    template<typename SourceMetadataT = AnomalySourceMetadata>
    ProactiveAnomalySummary& WithSourceMetadata(SourceMetadataT&& value) { SetSourceMetadata(std::forward<SourceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a resource in which DevOps Guru detected anomalous
     * behavior.</p>
     */
    inline const Aws::Vector<AnomalyResource>& GetAnomalyResources() const { return m_anomalyResources; }
    inline bool AnomalyResourcesHasBeenSet() const { return m_anomalyResourcesHasBeenSet; }
    template<typename AnomalyResourcesT = Aws::Vector<AnomalyResource>>
    void SetAnomalyResources(AnomalyResourcesT&& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources = std::forward<AnomalyResourcesT>(value); }
    template<typename AnomalyResourcesT = Aws::Vector<AnomalyResource>>
    ProactiveAnomalySummary& WithAnomalyResources(AnomalyResourcesT&& value) { SetAnomalyResources(std::forward<AnomalyResourcesT>(value)); return *this;}
    template<typename AnomalyResourcesT = AnomalyResource>
    ProactiveAnomalySummary& AddAnomalyResources(AnomalyResourcesT&& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources.emplace_back(std::forward<AnomalyResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A description of the proactive anomaly. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ProactiveAnomalySummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AnomalySeverity m_severity{AnomalySeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    AnomalyStatus m_status{AnomalyStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    AnomalyTimeRange m_anomalyTimeRange;
    bool m_anomalyTimeRangeHasBeenSet = false;

    AnomalyReportedTimeRange m_anomalyReportedTimeRange;
    bool m_anomalyReportedTimeRangeHasBeenSet = false;

    PredictionTimeRange m_predictionTimeRange;
    bool m_predictionTimeRangeHasBeenSet = false;

    AnomalySourceDetails m_sourceDetails;
    bool m_sourceDetailsHasBeenSet = false;

    Aws::String m_associatedInsightId;
    bool m_associatedInsightIdHasBeenSet = false;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    double m_limit{0.0};
    bool m_limitHasBeenSet = false;

    AnomalySourceMetadata m_sourceMetadata;
    bool m_sourceMetadataHasBeenSet = false;

    Aws::Vector<AnomalyResource> m_anomalyResources;
    bool m_anomalyResourcesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
