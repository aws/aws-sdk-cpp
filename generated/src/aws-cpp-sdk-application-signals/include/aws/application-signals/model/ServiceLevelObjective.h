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
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjective();
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjective(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of this SLO.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ServiceLevelObjective& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServiceLevelObjective& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServiceLevelObjective& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this SLO.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceLevelObjective& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceLevelObjective& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceLevelObjective& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description that you created for this SLO.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ServiceLevelObjective& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ServiceLevelObjective& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ServiceLevelObjective& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this SLO was created. When used in a raw HTTP Query
     * API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ServiceLevelObjective& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ServiceLevelObjective& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this SLO was most recently updated. When used in a raw HTTP
     * Query API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ServiceLevelObjective& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ServiceLevelObjective& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing information about the performance metric that this SLO
     * monitors, if this is a period-based SLO.</p>
     */
    inline const ServiceLevelIndicator& GetSli() const{ return m_sli; }
    inline bool SliHasBeenSet() const { return m_sliHasBeenSet; }
    inline void SetSli(const ServiceLevelIndicator& value) { m_sliHasBeenSet = true; m_sli = value; }
    inline void SetSli(ServiceLevelIndicator&& value) { m_sliHasBeenSet = true; m_sli = std::move(value); }
    inline ServiceLevelObjective& WithSli(const ServiceLevelIndicator& value) { SetSli(value); return *this;}
    inline ServiceLevelObjective& WithSli(ServiceLevelIndicator&& value) { SetSli(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing information about the performance metric that this SLO
     * monitors, if this is a request-based SLO.</p>
     */
    inline const RequestBasedServiceLevelIndicator& GetRequestBasedSli() const{ return m_requestBasedSli; }
    inline bool RequestBasedSliHasBeenSet() const { return m_requestBasedSliHasBeenSet; }
    inline void SetRequestBasedSli(const RequestBasedServiceLevelIndicator& value) { m_requestBasedSliHasBeenSet = true; m_requestBasedSli = value; }
    inline void SetRequestBasedSli(RequestBasedServiceLevelIndicator&& value) { m_requestBasedSliHasBeenSet = true; m_requestBasedSli = std::move(value); }
    inline ServiceLevelObjective& WithRequestBasedSli(const RequestBasedServiceLevelIndicator& value) { SetRequestBasedSli(value); return *this;}
    inline ServiceLevelObjective& WithRequestBasedSli(RequestBasedServiceLevelIndicator&& value) { SetRequestBasedSli(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays whether this is a period-based SLO or a request-based SLO.</p>
     */
    inline const EvaluationType& GetEvaluationType() const{ return m_evaluationType; }
    inline bool EvaluationTypeHasBeenSet() const { return m_evaluationTypeHasBeenSet; }
    inline void SetEvaluationType(const EvaluationType& value) { m_evaluationTypeHasBeenSet = true; m_evaluationType = value; }
    inline void SetEvaluationType(EvaluationType&& value) { m_evaluationTypeHasBeenSet = true; m_evaluationType = std::move(value); }
    inline ServiceLevelObjective& WithEvaluationType(const EvaluationType& value) { SetEvaluationType(value); return *this;}
    inline ServiceLevelObjective& WithEvaluationType(EvaluationType&& value) { SetEvaluationType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Goal& GetGoal() const{ return m_goal; }
    inline bool GoalHasBeenSet() const { return m_goalHasBeenSet; }
    inline void SetGoal(const Goal& value) { m_goalHasBeenSet = true; m_goal = value; }
    inline void SetGoal(Goal&& value) { m_goalHasBeenSet = true; m_goal = std::move(value); }
    inline ServiceLevelObjective& WithGoal(const Goal& value) { SetGoal(value); return *this;}
    inline ServiceLevelObjective& WithGoal(Goal&& value) { SetGoal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each object in this array defines the length of the look-back window used to
     * calculate one burn rate metric for this SLO. The burn rate measures how fast the
     * service is consuming the error budget, relative to the attainment goal of the
     * SLO.</p>
     */
    inline const Aws::Vector<BurnRateConfiguration>& GetBurnRateConfigurations() const{ return m_burnRateConfigurations; }
    inline bool BurnRateConfigurationsHasBeenSet() const { return m_burnRateConfigurationsHasBeenSet; }
    inline void SetBurnRateConfigurations(const Aws::Vector<BurnRateConfiguration>& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations = value; }
    inline void SetBurnRateConfigurations(Aws::Vector<BurnRateConfiguration>&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations = std::move(value); }
    inline ServiceLevelObjective& WithBurnRateConfigurations(const Aws::Vector<BurnRateConfiguration>& value) { SetBurnRateConfigurations(value); return *this;}
    inline ServiceLevelObjective& WithBurnRateConfigurations(Aws::Vector<BurnRateConfiguration>&& value) { SetBurnRateConfigurations(std::move(value)); return *this;}
    inline ServiceLevelObjective& AddBurnRateConfigurations(const BurnRateConfiguration& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations.push_back(value); return *this; }
    inline ServiceLevelObjective& AddBurnRateConfigurations(BurnRateConfiguration&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    ServiceLevelIndicator m_sli;
    bool m_sliHasBeenSet = false;

    RequestBasedServiceLevelIndicator m_requestBasedSli;
    bool m_requestBasedSliHasBeenSet = false;

    EvaluationType m_evaluationType;
    bool m_evaluationTypeHasBeenSet = false;

    Goal m_goal;
    bool m_goalHasBeenSet = false;

    Aws::Vector<BurnRateConfiguration> m_burnRateConfigurations;
    bool m_burnRateConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
