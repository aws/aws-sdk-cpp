/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/AnomalySeverity.h>
#include <aws/devops-guru/model/AnomalyStatus.h>
#include <aws/devops-guru/model/AnomalyTimeRange.h>
#include <aws/devops-guru/model/AnomalyReportedTimeRange.h>
#include <aws/devops-guru/model/AnomalySourceDetails.h>
#include <aws/devops-guru/model/ResourceCollection.h>
#include <aws/devops-guru/model/AnomalyType.h>
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
   * <p>Details about a reactive anomaly. This object is returned by
   * <code>DescribeAnomaly.</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ReactiveAnomalySummary">AWS
   * API Reference</a></p>
   */
  class ReactiveAnomalySummary
  {
  public:
    AWS_DEVOPSGURU_API ReactiveAnomalySummary();
    AWS_DEVOPSGURU_API ReactiveAnomalySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ReactiveAnomalySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the reactive anomaly. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ReactiveAnomalySummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ReactiveAnomalySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ReactiveAnomalySummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the anomaly. The severity of anomalies that generate an
     * insight determine that insight's severity. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline const AnomalySeverity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const AnomalySeverity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(AnomalySeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline ReactiveAnomalySummary& WithSeverity(const AnomalySeverity& value) { SetSeverity(value); return *this;}
    inline ReactiveAnomalySummary& WithSeverity(AnomalySeverity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the reactive anomaly. </p>
     */
    inline const AnomalyStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AnomalyStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AnomalyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReactiveAnomalySummary& WithStatus(const AnomalyStatus& value) { SetStatus(value); return *this;}
    inline ReactiveAnomalySummary& WithStatus(AnomalyStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AnomalyTimeRange& GetAnomalyTimeRange() const{ return m_anomalyTimeRange; }
    inline bool AnomalyTimeRangeHasBeenSet() const { return m_anomalyTimeRangeHasBeenSet; }
    inline void SetAnomalyTimeRange(const AnomalyTimeRange& value) { m_anomalyTimeRangeHasBeenSet = true; m_anomalyTimeRange = value; }
    inline void SetAnomalyTimeRange(AnomalyTimeRange&& value) { m_anomalyTimeRangeHasBeenSet = true; m_anomalyTimeRange = std::move(value); }
    inline ReactiveAnomalySummary& WithAnomalyTimeRange(const AnomalyTimeRange& value) { SetAnomalyTimeRange(value); return *this;}
    inline ReactiveAnomalySummary& WithAnomalyTimeRange(AnomalyTimeRange&& value) { SetAnomalyTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An <code>AnomalyReportedTimeRange</code> object that specifies the time
     * range between when the anomaly is opened and the time when it is closed. </p>
     */
    inline const AnomalyReportedTimeRange& GetAnomalyReportedTimeRange() const{ return m_anomalyReportedTimeRange; }
    inline bool AnomalyReportedTimeRangeHasBeenSet() const { return m_anomalyReportedTimeRangeHasBeenSet; }
    inline void SetAnomalyReportedTimeRange(const AnomalyReportedTimeRange& value) { m_anomalyReportedTimeRangeHasBeenSet = true; m_anomalyReportedTimeRange = value; }
    inline void SetAnomalyReportedTimeRange(AnomalyReportedTimeRange&& value) { m_anomalyReportedTimeRangeHasBeenSet = true; m_anomalyReportedTimeRange = std::move(value); }
    inline ReactiveAnomalySummary& WithAnomalyReportedTimeRange(const AnomalyReportedTimeRange& value) { SetAnomalyReportedTimeRange(value); return *this;}
    inline ReactiveAnomalySummary& WithAnomalyReportedTimeRange(AnomalyReportedTimeRange&& value) { SetAnomalyReportedTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline const AnomalySourceDetails& GetSourceDetails() const{ return m_sourceDetails; }
    inline bool SourceDetailsHasBeenSet() const { return m_sourceDetailsHasBeenSet; }
    inline void SetSourceDetails(const AnomalySourceDetails& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = value; }
    inline void SetSourceDetails(AnomalySourceDetails&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = std::move(value); }
    inline ReactiveAnomalySummary& WithSourceDetails(const AnomalySourceDetails& value) { SetSourceDetails(value); return *this;}
    inline ReactiveAnomalySummary& WithSourceDetails(AnomalySourceDetails&& value) { SetSourceDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline const Aws::String& GetAssociatedInsightId() const{ return m_associatedInsightId; }
    inline bool AssociatedInsightIdHasBeenSet() const { return m_associatedInsightIdHasBeenSet; }
    inline void SetAssociatedInsightId(const Aws::String& value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId = value; }
    inline void SetAssociatedInsightId(Aws::String&& value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId = std::move(value); }
    inline void SetAssociatedInsightId(const char* value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId.assign(value); }
    inline ReactiveAnomalySummary& WithAssociatedInsightId(const Aws::String& value) { SetAssociatedInsightId(value); return *this;}
    inline ReactiveAnomalySummary& WithAssociatedInsightId(Aws::String&& value) { SetAssociatedInsightId(std::move(value)); return *this;}
    inline ReactiveAnomalySummary& WithAssociatedInsightId(const char* value) { SetAssociatedInsightId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }
    inline ReactiveAnomalySummary& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}
    inline ReactiveAnomalySummary& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the reactive anomaly. It can be one of the following types.</p>
     * <ul> <li> <p> <code>CAUSAL</code> - the anomaly can cause a new insight.</p>
     * </li> <li> <p> <code>CONTEXTUAL</code> - the anomaly contains additional
     * information about an insight or its causal anomaly.</p> </li> </ul>
     */
    inline const AnomalyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AnomalyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AnomalyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ReactiveAnomalySummary& WithType(const AnomalyType& value) { SetType(value); return *this;}
    inline ReactiveAnomalySummary& WithType(AnomalyType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the reactive anomaly.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ReactiveAnomalySummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ReactiveAnomalySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ReactiveAnomalySummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the reactive anomaly.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ReactiveAnomalySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ReactiveAnomalySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ReactiveAnomalySummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the causal anomaly that is associated with this reactive anomaly.
     * The ID of a `CAUSAL` anomaly is always `NULL`.</p>
     */
    inline const Aws::String& GetCausalAnomalyId() const{ return m_causalAnomalyId; }
    inline bool CausalAnomalyIdHasBeenSet() const { return m_causalAnomalyIdHasBeenSet; }
    inline void SetCausalAnomalyId(const Aws::String& value) { m_causalAnomalyIdHasBeenSet = true; m_causalAnomalyId = value; }
    inline void SetCausalAnomalyId(Aws::String&& value) { m_causalAnomalyIdHasBeenSet = true; m_causalAnomalyId = std::move(value); }
    inline void SetCausalAnomalyId(const char* value) { m_causalAnomalyIdHasBeenSet = true; m_causalAnomalyId.assign(value); }
    inline ReactiveAnomalySummary& WithCausalAnomalyId(const Aws::String& value) { SetCausalAnomalyId(value); return *this;}
    inline ReactiveAnomalySummary& WithCausalAnomalyId(Aws::String&& value) { SetCausalAnomalyId(std::move(value)); return *this;}
    inline ReactiveAnomalySummary& WithCausalAnomalyId(const char* value) { SetCausalAnomalyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services resources in which anomalous behavior was detected by
     * DevOps Guru.</p>
     */
    inline const Aws::Vector<AnomalyResource>& GetAnomalyResources() const{ return m_anomalyResources; }
    inline bool AnomalyResourcesHasBeenSet() const { return m_anomalyResourcesHasBeenSet; }
    inline void SetAnomalyResources(const Aws::Vector<AnomalyResource>& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources = value; }
    inline void SetAnomalyResources(Aws::Vector<AnomalyResource>&& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources = std::move(value); }
    inline ReactiveAnomalySummary& WithAnomalyResources(const Aws::Vector<AnomalyResource>& value) { SetAnomalyResources(value); return *this;}
    inline ReactiveAnomalySummary& WithAnomalyResources(Aws::Vector<AnomalyResource>&& value) { SetAnomalyResources(std::move(value)); return *this;}
    inline ReactiveAnomalySummary& AddAnomalyResources(const AnomalyResource& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources.push_back(value); return *this; }
    inline ReactiveAnomalySummary& AddAnomalyResources(AnomalyResource&& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AnomalySeverity m_severity;
    bool m_severityHasBeenSet = false;

    AnomalyStatus m_status;
    bool m_statusHasBeenSet = false;

    AnomalyTimeRange m_anomalyTimeRange;
    bool m_anomalyTimeRangeHasBeenSet = false;

    AnomalyReportedTimeRange m_anomalyReportedTimeRange;
    bool m_anomalyReportedTimeRangeHasBeenSet = false;

    AnomalySourceDetails m_sourceDetails;
    bool m_sourceDetailsHasBeenSet = false;

    Aws::String m_associatedInsightId;
    bool m_associatedInsightIdHasBeenSet = false;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    AnomalyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_causalAnomalyId;
    bool m_causalAnomalyIdHasBeenSet = false;

    Aws::Vector<AnomalyResource> m_anomalyResources;
    bool m_anomalyResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
