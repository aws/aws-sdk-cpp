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
    AWS_DEVOPSGURU_API ReactiveAnomalySummary() = default;
    AWS_DEVOPSGURU_API ReactiveAnomalySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ReactiveAnomalySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the reactive anomaly. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ReactiveAnomalySummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    inline ReactiveAnomalySummary& WithSeverity(AnomalySeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the reactive anomaly. </p>
     */
    inline AnomalyStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AnomalyStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReactiveAnomalySummary& WithStatus(AnomalyStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const AnomalyTimeRange& GetAnomalyTimeRange() const { return m_anomalyTimeRange; }
    inline bool AnomalyTimeRangeHasBeenSet() const { return m_anomalyTimeRangeHasBeenSet; }
    template<typename AnomalyTimeRangeT = AnomalyTimeRange>
    void SetAnomalyTimeRange(AnomalyTimeRangeT&& value) { m_anomalyTimeRangeHasBeenSet = true; m_anomalyTimeRange = std::forward<AnomalyTimeRangeT>(value); }
    template<typename AnomalyTimeRangeT = AnomalyTimeRange>
    ReactiveAnomalySummary& WithAnomalyTimeRange(AnomalyTimeRangeT&& value) { SetAnomalyTimeRange(std::forward<AnomalyTimeRangeT>(value)); return *this;}
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
    ReactiveAnomalySummary& WithAnomalyReportedTimeRange(AnomalyReportedTimeRangeT&& value) { SetAnomalyReportedTimeRange(std::forward<AnomalyReportedTimeRangeT>(value)); return *this;}
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
    ReactiveAnomalySummary& WithSourceDetails(SourceDetailsT&& value) { SetSourceDetails(std::forward<SourceDetailsT>(value)); return *this;}
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
    ReactiveAnomalySummary& WithAssociatedInsightId(AssociatedInsightIdT&& value) { SetAssociatedInsightId(std::forward<AssociatedInsightIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = ResourceCollection>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollection>
    ReactiveAnomalySummary& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the reactive anomaly. It can be one of the following types.</p>
     * <ul> <li> <p> <code>CAUSAL</code> - the anomaly can cause a new insight.</p>
     * </li> <li> <p> <code>CONTEXTUAL</code> - the anomaly contains additional
     * information about an insight or its causal anomaly.</p> </li> </ul>
     */
    inline AnomalyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AnomalyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ReactiveAnomalySummary& WithType(AnomalyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the reactive anomaly.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ReactiveAnomalySummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the reactive anomaly.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ReactiveAnomalySummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the causal anomaly that is associated with this reactive anomaly.
     * The ID of a `CAUSAL` anomaly is always `NULL`.</p>
     */
    inline const Aws::String& GetCausalAnomalyId() const { return m_causalAnomalyId; }
    inline bool CausalAnomalyIdHasBeenSet() const { return m_causalAnomalyIdHasBeenSet; }
    template<typename CausalAnomalyIdT = Aws::String>
    void SetCausalAnomalyId(CausalAnomalyIdT&& value) { m_causalAnomalyIdHasBeenSet = true; m_causalAnomalyId = std::forward<CausalAnomalyIdT>(value); }
    template<typename CausalAnomalyIdT = Aws::String>
    ReactiveAnomalySummary& WithCausalAnomalyId(CausalAnomalyIdT&& value) { SetCausalAnomalyId(std::forward<CausalAnomalyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services resources in which anomalous behavior was detected by
     * DevOps Guru.</p>
     */
    inline const Aws::Vector<AnomalyResource>& GetAnomalyResources() const { return m_anomalyResources; }
    inline bool AnomalyResourcesHasBeenSet() const { return m_anomalyResourcesHasBeenSet; }
    template<typename AnomalyResourcesT = Aws::Vector<AnomalyResource>>
    void SetAnomalyResources(AnomalyResourcesT&& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources = std::forward<AnomalyResourcesT>(value); }
    template<typename AnomalyResourcesT = Aws::Vector<AnomalyResource>>
    ReactiveAnomalySummary& WithAnomalyResources(AnomalyResourcesT&& value) { SetAnomalyResources(std::forward<AnomalyResourcesT>(value)); return *this;}
    template<typename AnomalyResourcesT = AnomalyResource>
    ReactiveAnomalySummary& AddAnomalyResources(AnomalyResourcesT&& value) { m_anomalyResourcesHasBeenSet = true; m_anomalyResources.emplace_back(std::forward<AnomalyResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AnomalySeverity m_severity{AnomalySeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    AnomalyStatus m_status{AnomalyStatus::NOT_SET};
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

    AnomalyType m_type{AnomalyType::NOT_SET};
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
