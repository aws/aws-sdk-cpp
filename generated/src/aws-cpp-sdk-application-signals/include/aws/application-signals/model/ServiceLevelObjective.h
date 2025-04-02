/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-signals/model/ServiceLevelIndicator.h>
#include <aws/application-signals/model/RequestBasedServiceLevelIndicator.h>
#include <aws/application-signals/model/EvaluationType.h>
#include <aws/application-signals/model/Goal.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/MetricSourceType.h>
#include <aws/application-signals/model/BurnRateConfiguration.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>A structure containing information about one service level objective (SLO)
   * that has been created in Application Signals. Creating SLOs can help you ensure
   * your services are performing to the level that you expect. SLOs help you set and
   * track a specific target level for the reliability and availability of your
   * applications and services. Each SLO uses a service level indicator (SLI), which
   * is a key performance metric, to calculate how much underperformance can be
   * tolerated before the goal that you set for the SLO is not
   * achieved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceLevelObjective">AWS
   * API Reference</a></p>
   */
  class ServiceLevelObjective
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjective() = default;
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjective(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of this SLO.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ServiceLevelObjective& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this SLO.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ServiceLevelObjective& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description that you created for this SLO.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ServiceLevelObjective& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this SLO was created. When used in a raw HTTP Query
     * API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ServiceLevelObjective& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this SLO was most recently updated. When used in a raw HTTP
     * Query API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ServiceLevelObjective& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing information about the performance metric that this SLO
     * monitors, if this is a period-based SLO.</p>
     */
    inline const ServiceLevelIndicator& GetSli() const { return m_sli; }
    inline bool SliHasBeenSet() const { return m_sliHasBeenSet; }
    template<typename SliT = ServiceLevelIndicator>
    void SetSli(SliT&& value) { m_sliHasBeenSet = true; m_sli = std::forward<SliT>(value); }
    template<typename SliT = ServiceLevelIndicator>
    ServiceLevelObjective& WithSli(SliT&& value) { SetSli(std::forward<SliT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing information about the performance metric that this SLO
     * monitors, if this is a request-based SLO.</p>
     */
    inline const RequestBasedServiceLevelIndicator& GetRequestBasedSli() const { return m_requestBasedSli; }
    inline bool RequestBasedSliHasBeenSet() const { return m_requestBasedSliHasBeenSet; }
    template<typename RequestBasedSliT = RequestBasedServiceLevelIndicator>
    void SetRequestBasedSli(RequestBasedSliT&& value) { m_requestBasedSliHasBeenSet = true; m_requestBasedSli = std::forward<RequestBasedSliT>(value); }
    template<typename RequestBasedSliT = RequestBasedServiceLevelIndicator>
    ServiceLevelObjective& WithRequestBasedSli(RequestBasedSliT&& value) { SetRequestBasedSli(std::forward<RequestBasedSliT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays whether this is a period-based SLO or a request-based SLO.</p>
     */
    inline EvaluationType GetEvaluationType() const { return m_evaluationType; }
    inline bool EvaluationTypeHasBeenSet() const { return m_evaluationTypeHasBeenSet; }
    inline void SetEvaluationType(EvaluationType value) { m_evaluationTypeHasBeenSet = true; m_evaluationType = value; }
    inline ServiceLevelObjective& WithEvaluationType(EvaluationType value) { SetEvaluationType(value); return *this;}
    ///@}

    ///@{
    
    inline const Goal& GetGoal() const { return m_goal; }
    inline bool GoalHasBeenSet() const { return m_goalHasBeenSet; }
    template<typename GoalT = Goal>
    void SetGoal(GoalT&& value) { m_goalHasBeenSet = true; m_goal = std::forward<GoalT>(value); }
    template<typename GoalT = Goal>
    ServiceLevelObjective& WithGoal(GoalT&& value) { SetGoal(std::forward<GoalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each object in this array defines the length of the look-back window used to
     * calculate one burn rate metric for this SLO. The burn rate measures how fast the
     * service is consuming the error budget, relative to the attainment goal of the
     * SLO.</p>
     */
    inline const Aws::Vector<BurnRateConfiguration>& GetBurnRateConfigurations() const { return m_burnRateConfigurations; }
    inline bool BurnRateConfigurationsHasBeenSet() const { return m_burnRateConfigurationsHasBeenSet; }
    template<typename BurnRateConfigurationsT = Aws::Vector<BurnRateConfiguration>>
    void SetBurnRateConfigurations(BurnRateConfigurationsT&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations = std::forward<BurnRateConfigurationsT>(value); }
    template<typename BurnRateConfigurationsT = Aws::Vector<BurnRateConfiguration>>
    ServiceLevelObjective& WithBurnRateConfigurations(BurnRateConfigurationsT&& value) { SetBurnRateConfigurations(std::forward<BurnRateConfigurationsT>(value)); return *this;}
    template<typename BurnRateConfigurationsT = BurnRateConfiguration>
    ServiceLevelObjective& AddBurnRateConfigurations(BurnRateConfigurationsT&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations.emplace_back(std::forward<BurnRateConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Displays the SLI metric source type for this SLO. Supported types are:</p>
     * <ul> <li> <p>Service operation</p> </li> <li> <p>Service dependency</p> </li>
     * <li> <p>CloudWatch metric</p> </li> </ul>
     */
    inline MetricSourceType GetMetricSourceType() const { return m_metricSourceType; }
    inline bool MetricSourceTypeHasBeenSet() const { return m_metricSourceTypeHasBeenSet; }
    inline void SetMetricSourceType(MetricSourceType value) { m_metricSourceTypeHasBeenSet = true; m_metricSourceType = value; }
    inline ServiceLevelObjective& WithMetricSourceType(MetricSourceType value) { SetMetricSourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    ServiceLevelIndicator m_sli;
    bool m_sliHasBeenSet = false;

    RequestBasedServiceLevelIndicator m_requestBasedSli;
    bool m_requestBasedSliHasBeenSet = false;

    EvaluationType m_evaluationType{EvaluationType::NOT_SET};
    bool m_evaluationTypeHasBeenSet = false;

    Goal m_goal;
    bool m_goalHasBeenSet = false;

    Aws::Vector<BurnRateConfiguration> m_burnRateConfigurations;
    bool m_burnRateConfigurationsHasBeenSet = false;

    MetricSourceType m_metricSourceType{MetricSourceType::NOT_SET};
    bool m_metricSourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
