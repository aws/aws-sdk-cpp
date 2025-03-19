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
   * <code>DescribeInsight</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ProactiveOrganizationInsightSummary">AWS
   * API Reference</a></p>
   */
  class ProactiveOrganizationInsightSummary
  {
  public:
    AWS_DEVOPSGURU_API ProactiveOrganizationInsightSummary() = default;
    AWS_DEVOPSGURU_API ProactiveOrganizationInsightSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ProactiveOrganizationInsightSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the insight summary.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ProactiveOrganizationInsightSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ProactiveOrganizationInsightSummary& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    ProactiveOrganizationInsightSummary& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the insight summary.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProactiveOrganizationInsightSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of severity values used to search for insights. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline InsightSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(InsightSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ProactiveOrganizationInsightSummary& WithSeverity(InsightSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline InsightStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InsightStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProactiveOrganizationInsightSummary& WithStatus(InsightStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const InsightTimeRange& GetInsightTimeRange() const { return m_insightTimeRange; }
    inline bool InsightTimeRangeHasBeenSet() const { return m_insightTimeRangeHasBeenSet; }
    template<typename InsightTimeRangeT = InsightTimeRange>
    void SetInsightTimeRange(InsightTimeRangeT&& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = std::forward<InsightTimeRangeT>(value); }
    template<typename InsightTimeRangeT = InsightTimeRange>
    ProactiveOrganizationInsightSummary& WithInsightTimeRange(InsightTimeRangeT&& value) { SetInsightTimeRange(std::forward<InsightTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PredictionTimeRange& GetPredictionTimeRange() const { return m_predictionTimeRange; }
    inline bool PredictionTimeRangeHasBeenSet() const { return m_predictionTimeRangeHasBeenSet; }
    template<typename PredictionTimeRangeT = PredictionTimeRange>
    void SetPredictionTimeRange(PredictionTimeRangeT&& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = std::forward<PredictionTimeRangeT>(value); }
    template<typename PredictionTimeRangeT = PredictionTimeRange>
    ProactiveOrganizationInsightSummary& WithPredictionTimeRange(PredictionTimeRangeT&& value) { SetPredictionTimeRange(std::forward<PredictionTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = ResourceCollection>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollection>
    ProactiveOrganizationInsightSummary& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ServiceCollection& GetServiceCollection() const { return m_serviceCollection; }
    inline bool ServiceCollectionHasBeenSet() const { return m_serviceCollectionHasBeenSet; }
    template<typename ServiceCollectionT = ServiceCollection>
    void SetServiceCollection(ServiceCollectionT&& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = std::forward<ServiceCollectionT>(value); }
    template<typename ServiceCollectionT = ServiceCollection>
    ProactiveOrganizationInsightSummary& WithServiceCollection(ServiceCollectionT&& value) { SetServiceCollection(std::forward<ServiceCollectionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;

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
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
