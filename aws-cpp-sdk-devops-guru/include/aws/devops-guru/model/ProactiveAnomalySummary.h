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
    AWS_DEVOPSGURU_API ProactiveAnomalySummary();
    AWS_DEVOPSGURU_API ProactiveAnomalySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ProactiveAnomalySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the anomaly.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the anomaly.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the anomaly.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the anomaly.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the anomaly.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the anomaly.</p>
     */
    inline ProactiveAnomalySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the anomaly.</p>
     */
    inline ProactiveAnomalySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the anomaly.</p>
     */
    inline ProactiveAnomalySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The severity of the anomaly. The severity of anomalies that generate an
     * insight determine that insight's severity. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline const AnomalySeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the anomaly. The severity of anomalies that generate an
     * insight determine that insight's severity. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity of the anomaly. The severity of anomalies that generate an
     * insight determine that insight's severity. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline void SetSeverity(const AnomalySeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the anomaly. The severity of anomalies that generate an
     * insight determine that insight's severity. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline void SetSeverity(AnomalySeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of the anomaly. The severity of anomalies that generate an
     * insight determine that insight's severity. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline ProactiveAnomalySummary& WithSeverity(const AnomalySeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the anomaly. The severity of anomalies that generate an
     * insight determine that insight's severity. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline ProactiveAnomalySummary& WithSeverity(AnomalySeverity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>The status of the anomaly.</p>
     */
    inline const AnomalyStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the anomaly.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the anomaly.</p>
     */
    inline void SetStatus(const AnomalyStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the anomaly.</p>
     */
    inline void SetStatus(AnomalyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the anomaly.</p>
     */
    inline ProactiveAnomalySummary& WithStatus(const AnomalyStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the anomaly.</p>
     */
    inline ProactiveAnomalySummary& WithStatus(AnomalyStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The time of the anomaly's most recent update. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p> The time of the anomaly's most recent update. </p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p> The time of the anomaly's most recent update. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p> The time of the anomaly's most recent update. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p> The time of the anomaly's most recent update. </p>
     */
    inline ProactiveAnomalySummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p> The time of the anomaly's most recent update. </p>
     */
    inline ProactiveAnomalySummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    
    inline const AnomalyTimeRange& GetAnomalyTimeRange() const{ return m_anomalyTimeRange; }

    
    inline bool AnomalyTimeRangeHasBeenSet() const { return m_anomalyTimeRangeHasBeenSet; }

    
    inline void SetAnomalyTimeRange(const AnomalyTimeRange& value) { m_anomalyTimeRangeHasBeenSet = true; m_anomalyTimeRange = value; }

    
    inline void SetAnomalyTimeRange(AnomalyTimeRange&& value) { m_anomalyTimeRangeHasBeenSet = true; m_anomalyTimeRange = std::move(value); }

    
    inline ProactiveAnomalySummary& WithAnomalyTimeRange(const AnomalyTimeRange& value) { SetAnomalyTimeRange(value); return *this;}

    
    inline ProactiveAnomalySummary& WithAnomalyTimeRange(AnomalyTimeRange&& value) { SetAnomalyTimeRange(std::move(value)); return *this;}


    /**
     * <p> An <code>AnomalyReportedTimeRange</code> object that specifies the time
     * range between when the anomaly is opened and the time when it is closed. </p>
     */
    inline const AnomalyReportedTimeRange& GetAnomalyReportedTimeRange() const{ return m_anomalyReportedTimeRange; }

    /**
     * <p> An <code>AnomalyReportedTimeRange</code> object that specifies the time
     * range between when the anomaly is opened and the time when it is closed. </p>
     */
    inline bool AnomalyReportedTimeRangeHasBeenSet() const { return m_anomalyReportedTimeRangeHasBeenSet; }

    /**
     * <p> An <code>AnomalyReportedTimeRange</code> object that specifies the time
     * range between when the anomaly is opened and the time when it is closed. </p>
     */
    inline void SetAnomalyReportedTimeRange(const AnomalyReportedTimeRange& value) { m_anomalyReportedTimeRangeHasBeenSet = true; m_anomalyReportedTimeRange = value; }

    /**
     * <p> An <code>AnomalyReportedTimeRange</code> object that specifies the time
     * range between when the anomaly is opened and the time when it is closed. </p>
     */
    inline void SetAnomalyReportedTimeRange(AnomalyReportedTimeRange&& value) { m_anomalyReportedTimeRangeHasBeenSet = true; m_anomalyReportedTimeRange = std::move(value); }

    /**
     * <p> An <code>AnomalyReportedTimeRange</code> object that specifies the time
     * range between when the anomaly is opened and the time when it is closed. </p>
     */
    inline ProactiveAnomalySummary& WithAnomalyReportedTimeRange(const AnomalyReportedTimeRange& value) { SetAnomalyReportedTimeRange(value); return *this;}

    /**
     * <p> An <code>AnomalyReportedTimeRange</code> object that specifies the time
     * range between when the anomaly is opened and the time when it is closed. </p>
     */
    inline ProactiveAnomalySummary& WithAnomalyReportedTimeRange(AnomalyReportedTimeRange&& value) { SetAnomalyReportedTimeRange(std::move(value)); return *this;}


    
    inline const PredictionTimeRange& GetPredictionTimeRange() const{ return m_predictionTimeRange; }

    
    inline bool PredictionTimeRangeHasBeenSet() const { return m_predictionTimeRangeHasBeenSet; }

    
    inline void SetPredictionTimeRange(const PredictionTimeRange& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = value; }

    
    inline void SetPredictionTimeRange(PredictionTimeRange&& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = std::move(value); }

    
    inline ProactiveAnomalySummary& WithPredictionTimeRange(const PredictionTimeRange& value) { SetPredictionTimeRange(value); return *this;}

    
    inline ProactiveAnomalySummary& WithPredictionTimeRange(PredictionTimeRange&& value) { SetPredictionTimeRange(std::move(value)); return *this;}


    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline const AnomalySourceDetails& GetSourceDetails() const{ return m_sourceDetails; }

    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline bool SourceDetailsHasBeenSet() const { return m_sourceDetailsHasBeenSet; }

    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline void SetSourceDetails(const AnomalySourceDetails& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = value; }

    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline void SetSourceDetails(AnomalySourceDetails&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = std::move(value); }

    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline ProactiveAnomalySummary& WithSourceDetails(const AnomalySourceDetails& value) { SetSourceDetails(value); return *this;}

    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline ProactiveAnomalySummary& WithSourceDetails(AnomalySourceDetails&& value) { SetSourceDetails(std::move(value)); return *this;}


    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline const Aws::String& GetAssociatedInsightId() const{ return m_associatedInsightId; }

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline bool AssociatedInsightIdHasBeenSet() const { return m_associatedInsightIdHasBeenSet; }

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline void SetAssociatedInsightId(const Aws::String& value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId = value; }

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline void SetAssociatedInsightId(Aws::String&& value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId = std::move(value); }

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline void SetAssociatedInsightId(const char* value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId.assign(value); }

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline ProactiveAnomalySummary& WithAssociatedInsightId(const Aws::String& value) { SetAssociatedInsightId(value); return *this;}

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline ProactiveAnomalySummary& WithAssociatedInsightId(Aws::String&& value) { SetAssociatedInsightId(std::move(value)); return *this;}

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline ProactiveAnomalySummary& WithAssociatedInsightId(const char* value) { SetAssociatedInsightId(value); return *this;}


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline ProactiveAnomalySummary& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline ProactiveAnomalySummary& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}


    /**
     * <p> A threshold that was exceeded by behavior in analyzed resources. Exceeding
     * this threshold is related to the anomalous behavior that generated this anomaly.
     * </p>
     */
    inline double GetLimit() const{ return m_limit; }

    /**
     * <p> A threshold that was exceeded by behavior in analyzed resources. Exceeding
     * this threshold is related to the anomalous behavior that generated this anomaly.
     * </p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p> A threshold that was exceeded by behavior in analyzed resources. Exceeding
     * this threshold is related to the anomalous behavior that generated this anomaly.
     * </p>
     */
    inline void SetLimit(double value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p> A threshold that was exceeded by behavior in analyzed resources. Exceeding
     * this threshold is related to the anomalous behavior that generated this anomaly.
     * </p>
     */
    inline ProactiveAnomalySummary& WithLimit(double value) { SetLimit(value); return *this;}


    /**
     * <p>The metadata of the source which detects proactive anomalies.</p>
     */
    inline const AnomalySourceMetadata& GetSourceMetadata() const{ return m_sourceMetadata; }

    /**
     * <p>The metadata of the source which detects proactive anomalies.</p>
     */
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }

    /**
     * <p>The metadata of the source which detects proactive anomalies.</p>
     */
    inline void SetSourceMetadata(const AnomalySourceMetadata& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = value; }

    /**
     * <p>The metadata of the source which detects proactive anomalies.</p>
     */
    inline void SetSourceMetadata(AnomalySourceMetadata&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::move(value); }

    /**
     * <p>The metadata of the source which detects proactive anomalies.</p>
     */
    inline ProactiveAnomalySummary& WithSourceMetadata(const AnomalySourceMetadata& value) { SetSourceMetadata(value); return *this;}

    /**
     * <p>The metadata of the source which detects proactive anomalies.</p>
     */
    inline ProactiveAnomalySummary& WithSourceMetadata(AnomalySourceMetadata&& value) { SetSourceMetadata(std::move(value)); return *this;}


    /**
     * <p>Information about a resource in which DevOps Guru detected anomalous
     * behavior.</p>
     */
    inline const Aws::Vector<AnomalyResource>& GetAnomalyResources() const{ return m_anomalyResources; }

    /**
     * <p>Information about a resource in which DevOps Guru detected anomalous
     * behavior.</p>
     */
    inline bool AnomalyResourcesHasBeenSet() const { return m_anomalyResourcesHasBeenSet; }

    /**
     * <p>Information about a resource in which DevOps Guru detected anomalous
     * behavior.</p>
     */
    inline void SetAnomalyResources(const Aws::Vector<AnomalyResource>& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources = value; }

    /**
     * <p>Information about a resource in which DevOps Guru detected anomalous
     * behavior.</p>
     */
    inline void SetAnomalyResources(Aws::Vector<AnomalyResource>&& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources = std::move(value); }

    /**
     * <p>Information about a resource in which DevOps Guru detected anomalous
     * behavior.</p>
     */
    inline ProactiveAnomalySummary& WithAnomalyResources(const Aws::Vector<AnomalyResource>& value) { SetAnomalyResources(value); return *this;}

    /**
     * <p>Information about a resource in which DevOps Guru detected anomalous
     * behavior.</p>
     */
    inline ProactiveAnomalySummary& WithAnomalyResources(Aws::Vector<AnomalyResource>&& value) { SetAnomalyResources(std::move(value)); return *this;}

    /**
     * <p>Information about a resource in which DevOps Guru detected anomalous
     * behavior.</p>
     */
    inline ProactiveAnomalySummary& AddAnomalyResources(const AnomalyResource& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources.push_back(value); return *this; }

    /**
     * <p>Information about a resource in which DevOps Guru detected anomalous
     * behavior.</p>
     */
    inline ProactiveAnomalySummary& AddAnomalyResources(AnomalyResource&& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AnomalySeverity m_severity;
    bool m_severityHasBeenSet = false;

    AnomalyStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
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

    double m_limit;
    bool m_limitHasBeenSet = false;

    AnomalySourceMetadata m_sourceMetadata;
    bool m_sourceMetadataHasBeenSet = false;

    Aws::Vector<AnomalyResource> m_anomalyResources;
    bool m_anomalyResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
