/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceLevelIndicatorConfig.h>
#include <aws/application-signals/model/RequestBasedServiceLevelIndicatorConfig.h>
#include <aws/application-signals/model/Goal.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/BurnRateConfiguration.h>
#include <utility>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

  /**
   */
  class UpdateServiceLevelObjectiveRequest : public ApplicationSignalsRequest
  {
  public:
    AWS_APPLICATIONSIGNALS_API UpdateServiceLevelObjectiveRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceLevelObjective"; }

    AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or name of the service level objective that
     * you want to update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateServiceLevelObjectiveRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the SLO.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateServiceLevelObjectiveRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this SLO is a period-based SLO, this structure defines the information
     * about what performance metric this SLO will monitor.</p>
     */
    inline const ServiceLevelIndicatorConfig& GetSliConfig() const { return m_sliConfig; }
    inline bool SliConfigHasBeenSet() const { return m_sliConfigHasBeenSet; }
    template<typename SliConfigT = ServiceLevelIndicatorConfig>
    void SetSliConfig(SliConfigT&& value) { m_sliConfigHasBeenSet = true; m_sliConfig = std::forward<SliConfigT>(value); }
    template<typename SliConfigT = ServiceLevelIndicatorConfig>
    UpdateServiceLevelObjectiveRequest& WithSliConfig(SliConfigT&& value) { SetSliConfig(std::forward<SliConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this SLO is a request-based SLO, this structure defines the information
     * about what performance metric this SLO will monitor.</p> <p>You can't specify
     * both <code>SliConfig</code> and <code>RequestBasedSliConfig</code> in the same
     * operation.</p>
     */
    inline const RequestBasedServiceLevelIndicatorConfig& GetRequestBasedSliConfig() const { return m_requestBasedSliConfig; }
    inline bool RequestBasedSliConfigHasBeenSet() const { return m_requestBasedSliConfigHasBeenSet; }
    template<typename RequestBasedSliConfigT = RequestBasedServiceLevelIndicatorConfig>
    void SetRequestBasedSliConfig(RequestBasedSliConfigT&& value) { m_requestBasedSliConfigHasBeenSet = true; m_requestBasedSliConfig = std::forward<RequestBasedSliConfigT>(value); }
    template<typename RequestBasedSliConfigT = RequestBasedServiceLevelIndicatorConfig>
    UpdateServiceLevelObjectiveRequest& WithRequestBasedSliConfig(RequestBasedSliConfigT&& value) { SetRequestBasedSliConfig(std::forward<RequestBasedSliConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the attributes that determine the goal of the SLO.
     * This includes the time period for evaluation and the attainment threshold.</p>
     */
    inline const Goal& GetGoal() const { return m_goal; }
    inline bool GoalHasBeenSet() const { return m_goalHasBeenSet; }
    template<typename GoalT = Goal>
    void SetGoal(GoalT&& value) { m_goalHasBeenSet = true; m_goal = std::forward<GoalT>(value); }
    template<typename GoalT = Goal>
    UpdateServiceLevelObjectiveRequest& WithGoal(GoalT&& value) { SetGoal(std::forward<GoalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this array to create <i>burn rates</i> for this SLO. Each burn rate is a
     * metric that indicates how fast the service is consuming the error budget,
     * relative to the attainment goal of the SLO.</p>
     */
    inline const Aws::Vector<BurnRateConfiguration>& GetBurnRateConfigurations() const { return m_burnRateConfigurations; }
    inline bool BurnRateConfigurationsHasBeenSet() const { return m_burnRateConfigurationsHasBeenSet; }
    template<typename BurnRateConfigurationsT = Aws::Vector<BurnRateConfiguration>>
    void SetBurnRateConfigurations(BurnRateConfigurationsT&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations = std::forward<BurnRateConfigurationsT>(value); }
    template<typename BurnRateConfigurationsT = Aws::Vector<BurnRateConfiguration>>
    UpdateServiceLevelObjectiveRequest& WithBurnRateConfigurations(BurnRateConfigurationsT&& value) { SetBurnRateConfigurations(std::forward<BurnRateConfigurationsT>(value)); return *this;}
    template<typename BurnRateConfigurationsT = BurnRateConfiguration>
    UpdateServiceLevelObjectiveRequest& AddBurnRateConfigurations(BurnRateConfigurationsT&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations.emplace_back(std::forward<BurnRateConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServiceLevelIndicatorConfig m_sliConfig;
    bool m_sliConfigHasBeenSet = false;

    RequestBasedServiceLevelIndicatorConfig m_requestBasedSliConfig;
    bool m_requestBasedSliConfigHasBeenSet = false;

    Goal m_goal;
    bool m_goalHasBeenSet = false;

    Aws::Vector<BurnRateConfiguration> m_burnRateConfigurations;
    bool m_burnRateConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
