/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/InsightSeverity.h>
#include <aws/devops-guru/model/InsightStatus.h>
#include <aws/devops-guru/model/InsightTimeRange.h>
#include <aws/devops-guru/model/PredictionTimeRange.h>
#include <aws/devops-guru/model/ResourceCollection.h>
#include <aws/devops-guru/model/ServiceCollection.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Details about a proactive insight. This object is returned by
   * <code>DescribeInsight.</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ProactiveInsightSummary">AWS
   * API Reference</a></p>
   */
  class ProactiveInsightSummary
  {
  public:
    AWS_DEVOPSGURU_API ProactiveInsightSummary() = default;
    AWS_DEVOPSGURU_API ProactiveInsightSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ProactiveInsightSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ProactiveInsightSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the proactive insight. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProactiveInsightSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the insight. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline InsightSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(InsightSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ProactiveInsightSummary& WithSeverity(InsightSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the proactive insight. </p>
     */
    inline InsightStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InsightStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProactiveInsightSummary& WithStatus(InsightStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const InsightTimeRange& GetInsightTimeRange() const { return m_insightTimeRange; }
    inline bool InsightTimeRangeHasBeenSet() const { return m_insightTimeRangeHasBeenSet; }
    template<typename InsightTimeRangeT = InsightTimeRange>
    void SetInsightTimeRange(InsightTimeRangeT&& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = std::forward<InsightTimeRangeT>(value); }
    template<typename InsightTimeRangeT = InsightTimeRange>
    ProactiveInsightSummary& WithInsightTimeRange(InsightTimeRangeT&& value) { SetInsightTimeRange(std::forward<InsightTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PredictionTimeRange& GetPredictionTimeRange() const { return m_predictionTimeRange; }
    inline bool PredictionTimeRangeHasBeenSet() const { return m_predictionTimeRangeHasBeenSet; }
    template<typename PredictionTimeRangeT = PredictionTimeRange>
    void SetPredictionTimeRange(PredictionTimeRangeT&& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = std::forward<PredictionTimeRangeT>(value); }
    template<typename PredictionTimeRangeT = PredictionTimeRange>
    ProactiveInsightSummary& WithPredictionTimeRange(PredictionTimeRangeT&& value) { SetPredictionTimeRange(std::forward<PredictionTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = ResourceCollection>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollection>
    ProactiveInsightSummary& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline const ServiceCollection& GetServiceCollection() const { return m_serviceCollection; }
    inline bool ServiceCollectionHasBeenSet() const { return m_serviceCollectionHasBeenSet; }
    template<typename ServiceCollectionT = ServiceCollection>
    void SetServiceCollection(ServiceCollectionT&& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = std::forward<ServiceCollectionT>(value); }
    template<typename ServiceCollectionT = ServiceCollection>
    ProactiveInsightSummary& WithServiceCollection(ServiceCollectionT&& value) { SetServiceCollection(std::forward<ServiceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon Web Services resources that
     * generated this insight.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedResourceArns() const { return m_associatedResourceArns; }
    inline bool AssociatedResourceArnsHasBeenSet() const { return m_associatedResourceArnsHasBeenSet; }
    template<typename AssociatedResourceArnsT = Aws::Vector<Aws::String>>
    void SetAssociatedResourceArns(AssociatedResourceArnsT&& value) { m_associatedResourceArnsHasBeenSet = true; m_associatedResourceArns = std::forward<AssociatedResourceArnsT>(value); }
    template<typename AssociatedResourceArnsT = Aws::Vector<Aws::String>>
    ProactiveInsightSummary& WithAssociatedResourceArns(AssociatedResourceArnsT&& value) { SetAssociatedResourceArns(std::forward<AssociatedResourceArnsT>(value)); return *this;}
    template<typename AssociatedResourceArnsT = Aws::String>
    ProactiveInsightSummary& AddAssociatedResourceArns(AssociatedResourceArnsT&& value) { m_associatedResourceArnsHasBeenSet = true; m_associatedResourceArns.emplace_back(std::forward<AssociatedResourceArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InsightSeverity m_severity{InsightSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    InsightStatus m_status{InsightStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    InsightTimeRange m_insightTimeRange;
    bool m_insightTimeRangeHasBeenSet = false;

    PredictionTimeRange m_predictionTimeRange;
    bool m_predictionTimeRangeHasBeenSet = false;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    ServiceCollection m_serviceCollection;
    bool m_serviceCollectionHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedResourceArns;
    bool m_associatedResourceArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
